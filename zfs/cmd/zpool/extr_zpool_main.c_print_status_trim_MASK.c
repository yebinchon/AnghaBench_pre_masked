
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zbuf ;
struct TYPE_3__ {int vs_trim_state; int vs_trim_bytes_done; int vs_trim_bytes_est; scalar_t__ vs_trim_notsup; int vs_trim_action_time; int vs_scan_removing; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef int time_t ;
typedef int tbuf ;
struct tm {int dummy; } ;
typedef scalar_t__ boolean_t ;





 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int FUNC_4 (char*,int,char*,struct tm*) ;

__attribute__((used)) static void
FUNC_5(vdev_stat_t *VAR_0, boolean_t VAR_1)
{
 if (VAR_1) {
  if ((VAR_0->vs_trim_state == 130 ||
      VAR_0->vs_trim_state == 128 ||
      VAR_0->vs_trim_state == 129) &&
      !VAR_0->vs_scan_removing) {
   char VAR_2[1024];
   char VAR_3[256];
   struct tm VAR_4;

   time_t VAR_5 = VAR_0->vs_trim_action_time;
   int VAR_6 = 100;
   if (VAR_0->vs_trim_state != 129) {
    VAR_6 = (VAR_0->vs_trim_bytes_done *
        100 / (VAR_0->vs_trim_bytes_est + 1));
   }

   (void) FUNC_1(&VAR_5, &VAR_4);
   (void) FUNC_4(VAR_3, sizeof (VAR_3), "%c", &VAR_4);

   switch (VAR_0->vs_trim_state) {
   case 128:
    (void) FUNC_3(VAR_2, sizeof (VAR_2), ", %s %s",
        FUNC_0("suspended, started at"), VAR_3);
    break;
   case 130:
    (void) FUNC_3(VAR_2, sizeof (VAR_2), ", %s %s",
        FUNC_0("started at"), VAR_3);
    break;
   case 129:
    (void) FUNC_3(VAR_2, sizeof (VAR_2), ", %s %s",
        FUNC_0("completed at"), VAR_3);
    break;
   }

   (void) FUNC_2(FUNC_0("  (%d%% trimmed%s)"),
       VAR_6, VAR_2);
  } else if (VAR_0->vs_trim_notsup) {
   (void) FUNC_2(FUNC_0("  (trim unsupported)"));
  } else {
   (void) FUNC_2(FUNC_0("  (untrimmed)"));
  }
 } else if (VAR_0->vs_trim_state == 130) {
  (void) FUNC_2(FUNC_0("  (trimming)"));
 }
}
