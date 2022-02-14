
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zap_normflags; } ;
typedef TYPE_1__ zap_t ;
typedef int zap_name_t ;
struct TYPE_7__ {scalar_t__ zeh_hash; scalar_t__ zeh_cd; int zeh_leaf; } ;
typedef TYPE_2__ zap_entry_handle_t ;
typedef scalar_t__ uint16_t ;
struct zap_leaf_entry {scalar_t__ le_next; scalar_t__ le_hash; scalar_t__ le_cd; int le_name_numints; int le_name_chunk; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 struct zap_leaf_entry* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ) ;
 int * FUNC_3 (TYPE_1__*,char const*,int ) ;
 int FUNC_4 (int *) ;

boolean_t
FUNC_5(zap_entry_handle_t *VAR_4, zap_name_t *VAR_5,
    const char *VAR_6, zap_t *VAR_7)
{
 struct zap_leaf_entry *VAR_8;
 boolean_t VAR_9 = VAR_0;

 if (VAR_7->zap_normflags == 0)
  return (VAR_0);

 for (uint16_t VAR_10 = *FUNC_0(VAR_4->zeh_leaf, VAR_4->zeh_hash);
     VAR_10 != VAR_2; VAR_10 = VAR_8->le_next) {
  VAR_8 = FUNC_1(VAR_4->zeh_leaf, VAR_10);
  if (VAR_8->le_hash != VAR_4->zeh_hash)
   continue;
  if (VAR_8->le_cd == VAR_4->zeh_cd)
   continue;

  if (VAR_5 == ((void*)0)) {
   VAR_5 = FUNC_3(VAR_7, VAR_6, VAR_3);
   VAR_9 = VAR_1;
  }
  if (FUNC_2(VAR_4->zeh_leaf, VAR_5,
      VAR_8->le_name_chunk, VAR_8->le_name_numints)) {
   if (VAR_9)
    FUNC_4(VAR_5);
   return (VAR_1);
  }
 }
 if (VAR_9)
  FUNC_4(VAR_5);
 return (VAR_0);
}
