
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* index_name; int drop_index; char const* schema; } ;
typedef TYPE_1__ ChunkIndexDeleteData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ,int ,TYPE_1__*) ;
 int VAR_2 ;

void
FUNC_1(const char *VAR_3, const char *VAR_4, bool VAR_5)
{
 ChunkIndexDeleteData VAR_6 = {
  .index_name = VAR_4,
  .drop_index = VAR_5,
  .schema = VAR_3,
 };

 FUNC_0(VAR_0,
       ((void*)0),
       0,
       VAR_2,
       VAR_1,
       &VAR_6);
}
