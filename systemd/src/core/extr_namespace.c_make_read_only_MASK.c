
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mode; scalar_t__ ignore; int flags; scalar_t__ nosuid; } ;
typedef TYPE_1__ MountEntry ;
typedef TYPE_1__ const FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ,unsigned long,unsigned long) ;
 int FUNC_3 (int ,unsigned long,unsigned long,char**,TYPE_1__ const*) ;
 int FUNC_4 (int,char*,int ,char*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_7(const MountEntry *VAR_6, char **VAR_7, FILE *VAR_8) {
        unsigned long VAR_9 = 0, VAR_10 = 0;
        bool VAR_11 = 0;
        int VAR_12 = 0;

        FUNC_1(VAR_6);
        FUNC_1(VAR_8);

        if (FUNC_6(VAR_6) || VAR_6->mode == VAR_4) {
                VAR_9 |= VAR_3;
                VAR_10 |= VAR_3;
        }

        if (VAR_6->nosuid) {
                VAR_9 |= VAR_2;
                VAR_10 |= VAR_2;
        }

        if (VAR_10 == 0)
                return 0;





        VAR_11 =
                FUNC_6(VAR_6) &&
                !FUNC_0(VAR_6->mode, VAR_0, VAR_5);
        if (VAR_11)
                VAR_12 = FUNC_3(FUNC_5(VAR_6), VAR_9, VAR_10, VAR_7, VAR_8);
        else
                VAR_12 = FUNC_2(FUNC_5(VAR_6), VAR_6->flags, VAR_9, VAR_10);





        if (VAR_12 == -VAR_1 && VAR_6->ignore)
                return 0;
        if (VAR_12 < 0)
                return FUNC_4(VAR_12, "Failed to re-mount '%s'%s: %m", FUNC_5(VAR_6),
                                       VAR_11 ? " and its submounts" : "");
        return 0;
}
