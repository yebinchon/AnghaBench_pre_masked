
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int GLushort ;
typedef float GLfloat ;


 scalar_t__ VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (float,float*,float*) ;
 void* FUNC_2 (unsigned int,int) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_4,
                        GLfloat **VAR_5, GLfloat **VAR_6, unsigned *VAR_7,
                        GLushort **VAR_8, unsigned *VAR_9,
                        const float *VAR_10, const float *VAR_11,
                        const float *VAR_12, const float *VAR_13)
{
    unsigned VAR_14 = 128;
    unsigned VAR_15 = 128;

    *VAR_7 = (VAR_14 + 1) * (VAR_15 + 1);
    *VAR_9 = VAR_14 * VAR_15 * 3 * 2;

    *VAR_5 = FUNC_2(*VAR_7 * 3, sizeof(GLfloat));
    if (*VAR_5 == ((void*)0))
        return VAR_2;
    *VAR_6 = FUNC_2(VAR_4 * *VAR_7 * 2, sizeof(GLfloat));
    if (*VAR_6 == ((void*)0))
    {
        FUNC_0(*VAR_5);
        return VAR_2;
    }
    *VAR_8 = FUNC_2(*VAR_9, sizeof(GLushort));
    if (*VAR_8 == ((void*)0))
    {
        FUNC_0(*VAR_6);
        FUNC_0(*VAR_5);
        return VAR_2;
    }

    for (unsigned VAR_16 = 0; VAR_16 <= VAR_14; VAR_16++) {
        float VAR_17 = VAR_16 * (float) VAR_0 / VAR_14;
        float VAR_18, VAR_19;

        FUNC_1(VAR_17, &VAR_18, &VAR_19);

        for (unsigned VAR_20 = 0; VAR_20 <= VAR_15; VAR_20++) {
            float VAR_21 = VAR_20 * 2 * (float) VAR_0 / VAR_15;
            float VAR_22, VAR_23;

            FUNC_1(VAR_21, &VAR_22, &VAR_23);

            float VAR_24 = VAR_23 * VAR_18;
            float VAR_25 = VAR_19;
            float VAR_26 = VAR_22 * VAR_18;

            unsigned VAR_27 = (VAR_16 * (VAR_15 + 1) + VAR_20) * 3;
            (*VAR_5)[VAR_27] = VAR_1 * VAR_24;
            (*VAR_5)[VAR_27 + 1] = VAR_1 * VAR_25;
            (*VAR_5)[VAR_27 + 2] = VAR_1 * VAR_26;

            for (unsigned VAR_28 = 0; VAR_28 < VAR_4; ++VAR_28)
            {
                unsigned VAR_29 = (VAR_28 * (VAR_14 + 1) * (VAR_15 + 1)
                                + VAR_16 * (VAR_15 + 1) + VAR_20) * 2;
                float VAR_30 = VAR_12[VAR_28] - VAR_10[VAR_28];
                float VAR_31 = VAR_13[VAR_28] - VAR_11[VAR_28];
                float VAR_32 = (float)VAR_20 / VAR_15 * VAR_30;
                float VAR_33 = (float)VAR_16 / VAR_14 * VAR_31;
                (*VAR_6)[VAR_29] = VAR_32;
                (*VAR_6)[VAR_29 + 1] = VAR_33;
            }
        }
    }

    for (unsigned VAR_34 = 0; VAR_34 < VAR_14; VAR_34++) {
        for (unsigned VAR_35 = 0; VAR_35 < VAR_15; VAR_35++) {
            unsigned VAR_36 = (VAR_34 * (VAR_15 + 1)) + VAR_35;
            unsigned VAR_37 = VAR_36 + VAR_15 + 1;

            unsigned VAR_38 = (VAR_34 * VAR_14 + VAR_35) * 3 * 2;

            (*VAR_8)[VAR_38] = VAR_36;
            (*VAR_8)[VAR_38 + 1] = VAR_37;
            (*VAR_8)[VAR_38 + 2] = VAR_36 + 1;

            (*VAR_8)[VAR_38 + 3] = VAR_37;
            (*VAR_8)[VAR_38 + 4] = VAR_37 + 1;
            (*VAR_8)[VAR_38 + 5] = VAR_36 + 1;
        }
    }

    return VAR_3;
}
