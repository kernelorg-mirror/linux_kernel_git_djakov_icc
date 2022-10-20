#include <linux/module.h>
#include <linux/iommu.h>
#include <linux/qcom-iommu-util.h>

phys_addr_t qcom_iommu_iova_to_phys_hard(struct iommu_domain *domain,
					 struct qcom_iommu_atos_txn *txn)
{
	pr_info("%s TODO\n", __func__);
	return 0;
#if 0
	struct qcom_iommu_domain_ops ops = to_qcom_iommu_domain_ops(domain->ops);

	if (unlikely(ops->iova_to_phys_hard == NULL))
		return 0;

	return ops->iova_to_phys_hard(domain, txn);
#endif
}
EXPORT_SYMBOL(qcom_iommu_iova_to_phys_hard);
MODULE_LICENSE("GPL v2");
