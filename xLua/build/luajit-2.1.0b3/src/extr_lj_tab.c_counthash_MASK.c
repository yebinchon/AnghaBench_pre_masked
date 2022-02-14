
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t hmask; int node; } ;
struct TYPE_5__ {int key; int val; } ;
typedef TYPE_1__ Node ;
typedef TYPE_2__ GCtab ;


 size_t FUNC_0 (int *,size_t*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uint32_t FUNC_3(const GCtab *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2)
{
  uint32_t VAR_3, VAR_4, VAR_5, VAR_6 = VAR_0->hmask;
  Node *VAR_7 = FUNC_1(VAR_0->node);
  for (VAR_3 = VAR_4 = 0, VAR_5 = 0; VAR_5 <= VAR_6; VAR_5++) {
    Node *VAR_8 = &VAR_7[VAR_5];
    if (!FUNC_2(&VAR_8->val)) {
      VAR_4 += FUNC_0(&VAR_8->key, VAR_1);
      VAR_3++;
    }
  }
  *VAR_2 += VAR_4;
  return VAR_3;
}
