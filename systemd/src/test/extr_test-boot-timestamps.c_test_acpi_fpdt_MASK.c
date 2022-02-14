
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef int ts_start ;
typedef int ts_span ;
typedef int ts_exit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(void) {
        char VAR_7[VAR_3], VAR_8[VAR_3], VAR_9[VAR_3];
        usec_t VAR_10, VAR_11;
        int VAR_12;

        VAR_12 = FUNC_0(&VAR_10, &VAR_11);
        if (VAR_12 < 0) {
                bool VAR_13 = VAR_12 == -VAR_2 || (FUNC_2() != 0 && VAR_12 == -VAR_0) || VAR_12 == -VAR_1;

                FUNC_3(VAR_13 ? VAR_4 : VAR_5, VAR_12, "Failed to read ACPI FPDT: %m");
                return VAR_13 ? 0 : VAR_12;
        }

        FUNC_4("ACPI FPDT: loader start=%s exit=%s duration=%s",
                 FUNC_1(VAR_7, sizeof(VAR_7), VAR_10, VAR_6),
                 FUNC_1(VAR_8, sizeof(VAR_8), VAR_11, VAR_6),
                 FUNC_1(VAR_9, sizeof(VAR_9), VAR_11 - VAR_10, VAR_6));
        return 1;
}
