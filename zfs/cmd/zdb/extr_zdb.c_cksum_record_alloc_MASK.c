
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zio_cksum_t ;
struct TYPE_4__ {int * labels; int cksum; } ;
typedef TYPE_1__ cksum_record_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;

__attribute__((used)) static cksum_record_t *
FUNC_1(zio_cksum_t *VAR_2, int VAR_3)
{
 cksum_record_t *VAR_4;

 VAR_4 = FUNC_0(sizeof (*VAR_4), VAR_1);
 VAR_4->cksum = *VAR_2;
 VAR_4->labels[VAR_3] = VAR_0;

 return (VAR_4);
}
