
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int redaction_list_t ;
struct TYPE_3__ {char const* dbcra_bmark; char const* dbcra_snap; void* dbcra_tag; int * dbcra_snaps; int dbcra_numsnaps; int ** dbcra_rl; } ;
typedef TYPE_1__ dsl_bookmark_create_redacted_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*,int,int ) ;

int
FUNC_1(const char *VAR_3, const char *VAR_4,
    uint64_t VAR_5, uint64_t *VAR_6, void *VAR_7, redaction_list_t **VAR_8)
{
 dsl_bookmark_create_redacted_arg_t VAR_9;

 VAR_9.dbcra_bmark = VAR_3;
 VAR_9.dbcra_snap = VAR_4;
 VAR_9.dbcra_rl = VAR_8;
 VAR_9.dbcra_numsnaps = VAR_5;
 VAR_9.dbcra_snaps = VAR_6;
 VAR_9.dbcra_tag = VAR_7;

 return (FUNC_0(VAR_3, VAR_1,
     VAR_2, &VAR_9, 5,
     VAR_0));
}
