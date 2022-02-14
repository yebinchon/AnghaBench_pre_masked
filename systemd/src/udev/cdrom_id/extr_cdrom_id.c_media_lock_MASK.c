
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_3, bool VAR_4) {
        int VAR_5;


        VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_0);
        if (VAR_5 < 0)
                FUNC_1("CDROM_CLEAR_OPTIONS, CDO_LOCK failed");

        VAR_5 = FUNC_0(VAR_3, VAR_2, VAR_4 ? 1 : 0);
        if (VAR_5 < 0)
                FUNC_1("CDROM_LOCKDOOR failed");

        return VAR_5;
}
