
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zc_word; } ;
struct TYPE_4__ {TYPE_1__ cksum; } ;
typedef TYPE_2__ cksum_record_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const cksum_record_t *VAR_2 = (cksum_record_t *)VAR_0;
 const cksum_record_t *VAR_3 = (cksum_record_t *)VAR_1;
 int VAR_4 = FUNC_0(VAR_2->cksum.zc_word);
 int VAR_5;

 for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_1(VAR_2->cksum.zc_word[VAR_6], VAR_3->cksum.zc_word[VAR_6]);
  if (VAR_5)
   break;
 }

 return (VAR_5);
}
