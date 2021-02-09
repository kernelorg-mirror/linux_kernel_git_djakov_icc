
#ifndef __QCOM_IOMMU_UTIL_H
#define __QCOM_IOMMU_UTIL_H

#define EXTENDED_ATTR_BASE		(DOMAIN_ATTR_MAX + 16)
#define DOMAIN_ATTR_PT_BASE_ADDR	(EXTENDED_ATTR_BASE + 0)
#define DOMAIN_ATTR_CONTEXT_BANK	(EXTENDED_ATTR_BASE + 0)
#define CONFIG_IOMMU_IOVA_ALIGNMENT 1

#define IOMMU_TRANS_DEFAULT (0U)
#define QCOM_IOMMU_ATOS_TRANS_DEFAULT	(0U)
#define to_qcom_iommu_ops(x) (container_of(x, struct qcom_iommu_ops, iommu_ops))

#include <linux/iommu.h>

struct qcom_iommu_atos_txn {
	u64 addr;
	u32 flags;
	u32 id;
};

struct qcom_iommu_ops {
	phys_addr_t (*iova_to_phys_hard)(struct iommu_domain *domain,
					 struct qcom_iommu_atos_txn *txn);
	struct iommu_ops iommu_ops;
};

phys_addr_t qcom_iommu_iova_to_phys_hard(struct iommu_domain *domain,
					 struct qcom_iommu_atos_txn *tnx);
#endif
