
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(void) {
        char *VAR_0;

        VAR_0 = FUNC_2("LABEL=applé/jack");
        FUNC_3(VAR_0);
        FUNC_0(FUNC_4(VAR_0, "/dev/disk/by-label/applé\\x2fjack"));
        FUNC_1(VAR_0);

        VAR_0 = FUNC_2("PARTLABEL=pinkié pie");
        FUNC_3(VAR_0);
        FUNC_0(FUNC_4(VAR_0, "/dev/disk/by-partlabel/pinkié\\x20pie"));
        FUNC_1(VAR_0);

        VAR_0 = FUNC_2("UUID=037b9d94-148e-4ee4-8d38-67bfe15bb535");
        FUNC_3(VAR_0);
        FUNC_0(FUNC_4(VAR_0, "/dev/disk/by-uuid/037b9d94-148e-4ee4-8d38-67bfe15bb535"));
        FUNC_1(VAR_0);

        VAR_0 = FUNC_2("PARTUUID=037b9d94-148e-4ee4-8d38-67bfe15bb535");
        FUNC_3(VAR_0);
        FUNC_0(FUNC_4(VAR_0, "/dev/disk/by-partuuid/037b9d94-148e-4ee4-8d38-67bfe15bb535"));
        FUNC_1(VAR_0);

        VAR_0 = FUNC_2("PONIES=awesome");
        FUNC_3(VAR_0);
        FUNC_0(FUNC_4(VAR_0, "PONIES=awesome"));
        FUNC_1(VAR_0);

        VAR_0 = FUNC_2("/dev/xda1");
        FUNC_3(VAR_0);
        FUNC_0(FUNC_4(VAR_0, "/dev/xda1"));
        FUNC_1(VAR_0);
}
