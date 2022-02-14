
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* compressed_rte; TYPE_1__* ht_rte; } ;
struct TYPE_6__ {int relid; } ;
struct TYPE_5__ {int relid; } ;
typedef TYPE_3__ CompressionInfo ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;

AttrNumber
FUNC_3(CompressionInfo *VAR_2, AttrNumber VAR_3)
{
 AttrNumber VAR_4;
 char *VAR_5 = FUNC_1(VAR_2->ht_rte->relid, VAR_3, 0);
 VAR_4 = FUNC_2(VAR_2->compressed_rte->relid, VAR_5);

 if (VAR_4 == VAR_1)
  FUNC_0(VAR_0, "No matching column in compressed chunk found.");

 return VAR_4;
}
