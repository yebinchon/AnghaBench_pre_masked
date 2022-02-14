
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static usec_t FUNC_3(usec_t VAR_2, usec_t VAR_3) {
        FUNC_1(VAR_2 <= VAR_3, VAR_0);


        VAR_2 = FUNC_0(VAR_2, 3*VAR_1);
        VAR_3 = FUNC_0(VAR_3, 4*VAR_1);

        return VAR_2 + (FUNC_2() % (VAR_3 - VAR_2));
}
