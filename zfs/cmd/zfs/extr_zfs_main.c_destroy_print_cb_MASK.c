
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int * cb_prevsnap; int * cb_firstsnap; int cb_snapused; scalar_t__ cb_dryrun; scalar_t__ cb_parsable; scalar_t__ cb_verbose; int cb_nvl; } ;
typedef TYPE_1__ destroy_cbdata_t ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,scalar_t__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 int FUNC_5 (char*,char const*) ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(zfs_handle_t *VAR_0, void *VAR_1)
{
 destroy_cbdata_t *VAR_2 = VAR_1;
 const char *VAR_3 = FUNC_8(VAR_0);
 int VAR_4 = 0;

 if (FUNC_4(VAR_2->cb_nvl, VAR_3)) {
  if (VAR_2->cb_firstsnap == ((void*)0))
   VAR_2->cb_firstsnap = FUNC_6(VAR_3);
  if (VAR_2->cb_prevsnap != ((void*)0))
   FUNC_0(VAR_2->cb_prevsnap);

  VAR_2->cb_prevsnap = FUNC_6(VAR_3);
  if (VAR_2->cb_firstsnap == ((void*)0) || VAR_2->cb_prevsnap == ((void*)0))
   FUNC_3();
  if (VAR_2->cb_verbose) {
   if (VAR_2->cb_parsable) {
    (void) FUNC_5("destroy\t%s\n", VAR_3);
   } else if (VAR_2->cb_dryrun) {
    (void) FUNC_5(FUNC_1("would destroy %s\n"),
        VAR_3);
   } else {
    (void) FUNC_5(FUNC_1("will destroy %s\n"),
        VAR_3);
   }
  }
 } else if (VAR_2->cb_firstsnap != ((void*)0)) {

  uint64_t VAR_5 = 0;
  VAR_4 = FUNC_2(VAR_2->cb_firstsnap,
      VAR_2->cb_prevsnap, &VAR_5);
  VAR_2->cb_snapused += VAR_5;
  FUNC_0(VAR_2->cb_firstsnap);
  VAR_2->cb_firstsnap = ((void*)0);
  FUNC_0(VAR_2->cb_prevsnap);
  VAR_2->cb_prevsnap = ((void*)0);
 }
 FUNC_7(VAR_0);
 return (VAR_4);
}
