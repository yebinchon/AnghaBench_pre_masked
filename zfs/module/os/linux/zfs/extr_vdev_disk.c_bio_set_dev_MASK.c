
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
struct bio {struct block_device* bi_bdev; } ;



__attribute__((used)) static inline void
FUNC_0(struct bio *VAR_0, struct block_device *VAR_1)
{
 VAR_0->bi_bdev = VAR_1;
}
