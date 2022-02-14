
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netnames {int type; int vio_slot; } ;
typedef int sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *,char const**) ;
 int FUNC_2 (int *,char const**) ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(sd_device *VAR_3, struct netnames *VAR_4) {
        sd_device *VAR_5;
        unsigned VAR_6, VAR_7, VAR_8;
        const char *VAR_9, *VAR_10;
        int VAR_11;


        VAR_11 = FUNC_0(VAR_3, &VAR_5);
        if (VAR_11 < 0)
                return VAR_11;

        VAR_11 = FUNC_1(VAR_5, &VAR_10);
        if (VAR_11 < 0)
                return VAR_11;
        if (!FUNC_4("vio", VAR_10))
                return -VAR_1;





        VAR_11 = FUNC_2(VAR_3, &VAR_9);
        if (VAR_11 < 0)
                return VAR_11;

        if (FUNC_3(VAR_9, "/sys/devices/vio/%4x%4x/net/eth%u", &VAR_6, &VAR_7, &VAR_8) != 3)
                return -VAR_0;

        FUNC_5(VAR_4->vio_slot, "v%u", VAR_7);
        VAR_4->type = VAR_2;
        return 0;
}
