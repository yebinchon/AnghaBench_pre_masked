
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_label_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(uint64_t VAR_2, uint64_t VAR_3)
{
 int VAR_4;

 if (VAR_3 >= VAR_2 - VAR_1) {
  VAR_3 -= VAR_2 - VAR_1;
  VAR_3 += (VAR_0 / 2) * sizeof (vdev_label_t);
 }
 VAR_4 = VAR_3 / sizeof (vdev_label_t);
 return (VAR_4 < VAR_0 ? VAR_4 : -1);
}
