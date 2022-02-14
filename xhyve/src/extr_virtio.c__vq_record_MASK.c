
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct virtio_desc {int vd_flags; int vd_len; int vd_addr; } ;
struct iovec {int iov_len; int iov_base; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(int VAR_0, volatile struct virtio_desc *VAR_1, struct iovec *VAR_2, int VAR_3,
 uint16_t *VAR_4)
{
 if (VAR_0 >= VAR_3)
  return;
 VAR_2[VAR_0].iov_base = FUNC_0(VAR_1->vd_addr, VAR_1->vd_len);
 VAR_2[VAR_0].iov_len = VAR_1->vd_len;
 if (VAR_4 != ((void*)0))
  VAR_4[VAR_0] = VAR_1->vd_flags;
}
