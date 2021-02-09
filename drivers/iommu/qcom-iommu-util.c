#include <linux/module.h>
#include <linux/qcom-iommu-util.h>

phys_addr_t qcom_iommu_iova_to_phys_hard(struct iommu_domain *domain,
					 struct qcom_iommu_atos_txn *txn)
{
	struct qcom_iommu_ops *ops = to_qcom_iommu_ops(domain->ops);

	if (unlikely(ops->iova_to_phys_hard == NULL))
		return 0;

	return ops->iova_to_phys_hard(domain, txn);
}
EXPORT_SYMBOL(qcom_iommu_iova_to_phys_hard);
MODULE_LICENSE("GPL v2");
