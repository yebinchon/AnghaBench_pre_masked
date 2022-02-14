
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int scan_uptodate; int match_parent; } ;
typedef TYPE_1__ sd_device_enumerator ;
typedef TYPE_1__ sd_device ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char const**) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char const*) ;

int FUNC_4(sd_device_enumerator *VAR_1, sd_device *VAR_2) {
        const char *VAR_3;
        int VAR_4;

        FUNC_0(VAR_1, -VAR_0);
        FUNC_0(VAR_2, -VAR_0);

        VAR_4 = FUNC_1(VAR_2, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(&VAR_1->match_parent, ((void*)0));
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_3(VAR_1->match_parent, VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_1->scan_uptodate = 0;

        return 0;
}
