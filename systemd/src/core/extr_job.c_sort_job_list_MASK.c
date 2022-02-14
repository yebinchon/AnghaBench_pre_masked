
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Job ;


 int VAR_0 ;
 int FUNC_0 (int **,size_t,int ) ;

__attribute__((used)) static size_t FUNC_1(Job **VAR_1, size_t VAR_2) {
        Job *VAR_3 = ((void*)0);
        size_t VAR_4, VAR_5;


        FUNC_0(VAR_1, VAR_2, VAR_0);


        for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_2; VAR_4++) {

                if (VAR_3 == VAR_1[VAR_4])
                        continue;

                VAR_3 = VAR_1[VAR_5++] = VAR_1[VAR_4];
        }

        return VAR_5;
}
