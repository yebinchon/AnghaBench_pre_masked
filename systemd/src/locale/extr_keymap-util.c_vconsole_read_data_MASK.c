
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct stat {int st_mtim; } ;
typedef int sd_bus_message ;
struct TYPE_4__ {scalar_t__ vc_mtime; int vc_keymap_toggle; int vc_keymap; int * vc_cache; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*,int *,char*,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(Context *VAR_3, sd_bus_message *VAR_4) {
        struct stat VAR_5;
        usec_t VAR_6;
        int VAR_7;


        if (VAR_4) {
                if (VAR_4 == VAR_3->vc_cache)
                        return 0;

                FUNC_3(VAR_3->vc_cache);
                VAR_3->vc_cache = FUNC_2(VAR_4);
        }

        if (FUNC_4("/etc/vconsole.conf", &VAR_5) < 0) {
                if (VAR_2 != VAR_0)
                        return -VAR_2;

                VAR_3->vc_mtime = VAR_1;
                FUNC_0(VAR_3);
                return 0;
        }


        VAR_6 = FUNC_5(&VAR_5.st_mtim);
        if (VAR_3->vc_mtime != VAR_1 && VAR_6 == VAR_3->vc_mtime)
                return 0;

        VAR_3->vc_mtime = VAR_6;
        FUNC_0(VAR_3);

        VAR_7 = FUNC_1(((void*)0), "/etc/vconsole.conf",
                           "KEYMAP", &VAR_3->vc_keymap,
                           "KEYMAP_TOGGLE", &VAR_3->vc_keymap_toggle);
        if (VAR_7 < 0)
                return VAR_7;

        return 0;
}
