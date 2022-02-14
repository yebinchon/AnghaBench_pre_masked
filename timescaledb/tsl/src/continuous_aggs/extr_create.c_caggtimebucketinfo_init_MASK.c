
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_3__ {scalar_t__ bucket_width; int htpartcol_interval_len; void* htpartcoltype; int htpartcolno; void* htoid; int htid; } ;
typedef void* Oid ;
typedef TYPE_1__ CAggTimebucketInfo ;
typedef int AttrNumber ;



__attribute__((used)) static void
FUNC_0(CAggTimebucketInfo *VAR_0, int32 VAR_1, Oid VAR_2,
      AttrNumber VAR_3, Oid VAR_4,
      int64 VAR_5)
{
 VAR_0->htid = VAR_1;
 VAR_0->htoid = VAR_2;
 VAR_0->htpartcolno = VAR_3;
 VAR_0->htpartcoltype = VAR_4;
 VAR_0->htpartcol_interval_len = VAR_5;
 VAR_0->bucket_width = 0;
}
