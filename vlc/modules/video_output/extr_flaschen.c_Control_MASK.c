
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_display_t ;
typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;





 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(vout_display_t *VAR_2, int VAR_3, va_list VAR_4)
{
    FUNC_0(VAR_4);

    switch (VAR_3) {
    case 131:
    case 128:
    case 132:
    case 130:
    case 129:
        return VAR_1;

    default:
        FUNC_1(VAR_2, "Unsupported query in vout display flaschen");
        return VAR_0;
    }
}
