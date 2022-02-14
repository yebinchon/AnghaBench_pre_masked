
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netnames {int type; int ccw_busid; } ;
typedef struct netnames sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int,int) ;
 int VAR_2 ;
 int FUNC_1 (char const*,char*,char*) ;
 int FUNC_2 (struct netnames*) ;
 int FUNC_3 (struct netnames*,struct netnames**) ;
 int FUNC_4 (struct netnames*,char const**) ;
 int FUNC_5 (struct netnames*,char const**) ;
 struct netnames* FUNC_6 (struct netnames*) ;
 scalar_t__ FUNC_7 (int ,int,char*,char const*) ;
 size_t FUNC_8 (char const*) ;
 size_t FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(sd_device *VAR_3, struct netnames *VAR_4) {
        sd_device *VAR_5;
        const char *VAR_6, *VAR_7;
        size_t VAR_8;
        size_t VAR_9;
        int VAR_10;

        FUNC_2(VAR_3);
        FUNC_2(VAR_4);


        VAR_10 = FUNC_3(VAR_3, &VAR_5);
        if (VAR_10 < 0)
                return VAR_10;


        VAR_5 = FUNC_6(VAR_5);
        if (!VAR_5)
                return -VAR_1;

        VAR_10 = FUNC_4(VAR_5, &VAR_7);
        if (VAR_10 < 0)
                return VAR_10;


        if (!FUNC_1(VAR_7, "ccwgroup", "ccw"))
                return -VAR_1;





        VAR_10 = FUNC_5(VAR_5, &VAR_6);
        if (VAR_10 < 0)
                return VAR_10;




        VAR_8 = FUNC_8(VAR_6);
        if (!FUNC_0(VAR_8, 8, 9))
                return -VAR_0;






        VAR_9 = FUNC_9(VAR_6, ".0");
        VAR_6 += VAR_9 < VAR_8 ? VAR_9 : VAR_8 - 1;


        if (FUNC_7(VAR_4->ccw_busid, sizeof(VAR_4->ccw_busid), "c%s", VAR_6))
                VAR_4->type = VAR_2;

        return 0;
}
