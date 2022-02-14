
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int nr; int type; TYPE_2__ const* ops; } ;
typedef TYPE_1__ aes_key_t ;
struct TYPE_6__ {int (* generate ) (TYPE_1__*,int *,int) ;int needs_byteswap; } ;
typedef TYPE_2__ aes_impl_ops_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*,int) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (int const*,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;

void
FUNC_6(const uint8_t *VAR_1, uint_t VAR_2, void *VAR_3)
{
 const aes_impl_ops_t *VAR_4 = FUNC_2();
 aes_key_t *VAR_5 = VAR_3;
 uint_t VAR_6, VAR_7, VAR_8;
 union {
  uint64_t ka64[4];
  uint32_t ka32[8];
  } VAR_9;

 switch (VAR_2) {
 case 128:
  VAR_5->nr = 10;
  break;

 case 192:
  VAR_5->nr = 12;
  break;

 case 256:
  VAR_5->nr = 14;
  break;

 default:

  return;
 }
 VAR_6 = FUNC_0(VAR_2);






 if (!VAR_4->needs_byteswap) {

  if (FUNC_1(VAR_1, sizeof (uint64_t))) {
   for (VAR_7 = 0, VAR_8 = 0; VAR_8 < VAR_6; VAR_7++, VAR_8 += 8) {

    VAR_9.ka64[VAR_7] = *((uint64_t *)&VAR_1[VAR_8]);
   }
  } else {
   FUNC_3(VAR_1, VAR_9.ka32, VAR_6);
  }
 } else {

  for (VAR_7 = 0, VAR_8 = 0; VAR_8 < VAR_6; VAR_7++, VAR_8 += 4) {
   VAR_9.ka32[VAR_7] =
       FUNC_4(*(uint32_t *)(void *)&VAR_1[VAR_8]);
  }
 }

 VAR_4->generate(VAR_5, VAR_9.ka32, VAR_2);
 VAR_5->ops = VAR_4;





 VAR_5->type = VAR_0;
}
