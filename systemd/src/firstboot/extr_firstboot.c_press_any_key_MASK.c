
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ,char*,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_4(void) {
        char VAR_3 = 0;
        bool VAR_4 = 1;

        FUNC_1("-- Press any key to proceed --");
        FUNC_0(VAR_2);

        (void) FUNC_3(VAR_1, &VAR_3, VAR_0, &VAR_4);

        if (VAR_4)
                FUNC_2('\n');

        return VAR_3 != 'q';
}
