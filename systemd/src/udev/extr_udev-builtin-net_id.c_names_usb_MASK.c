
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netnames {char* usb_ports; int type; } ;
typedef struct netnames sd_device ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netnames*) ;
 int FUNC_1 (struct netnames*,char*,char*,struct netnames**) ;
 int FUNC_2 (struct netnames*,char const**) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char**,int,char*,char*,int *) ;
 int FUNC_6 (char*,int,char const*) ;

__attribute__((used)) static int FUNC_7(sd_device *VAR_3, struct netnames *VAR_4) {
        sd_device *VAR_5;
        char VAR_6[256], *VAR_7, *VAR_8, *VAR_9, *VAR_10;
        const char *VAR_11;
        size_t VAR_12;
        int VAR_13;

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_13 = FUNC_1(VAR_3, "usb", "usb_interface", &VAR_5);
        if (VAR_13 < 0)
                return VAR_13;

        VAR_13 = FUNC_2(VAR_5, &VAR_11);
        if (VAR_13 < 0)
                return VAR_13;


        FUNC_6(VAR_6, sizeof(VAR_6), VAR_11);
        VAR_10 = FUNC_3(VAR_6, '-');
        if (!VAR_10)
                return -VAR_0;
        VAR_7 = VAR_10+1;

        VAR_10 = FUNC_3(VAR_7, ':');
        if (!VAR_10)
                return -VAR_0;
        VAR_10[0] = '\0';
        VAR_8 = VAR_10+1;

        VAR_10 = FUNC_3(VAR_8, '.');
        if (!VAR_10)
                return -VAR_0;
        VAR_10[0] = '\0';
        VAR_9 = VAR_10+1;


        VAR_10 = VAR_7;
        while ((VAR_10 = FUNC_3(VAR_10, '.')))
                VAR_10[0] = 'u';
        VAR_10 = VAR_4->usb_ports;
        VAR_12 = FUNC_5(&VAR_10, sizeof(VAR_4->usb_ports), "u", VAR_7, ((void*)0));


        if (!FUNC_4(VAR_8, "1"))
                VAR_12 = FUNC_5(&VAR_10, sizeof(VAR_4->usb_ports), "c", VAR_8, ((void*)0));


        if (!FUNC_4(VAR_9, "0"))
                VAR_12 = FUNC_5(&VAR_10, sizeof(VAR_4->usb_ports), "i", VAR_9, ((void*)0));
        if (VAR_12 == 0)
                return -VAR_1;

        VAR_4->type = VAR_2;
        return 0;
}
