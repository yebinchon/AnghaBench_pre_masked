
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char const*,size_t*) ;

int FUNC_5(const char *VAR_1) {
        const char *VAR_2;
        int VAR_3 = 0, VAR_4;



        VAR_2 = VAR_1;
        while (*VAR_2 != 0) {
                size_t VAR_5;

                VAR_4 = FUNC_4(VAR_2, &VAR_5);
                if (VAR_4 < 0)
                        return VAR_4;
                else {
                        char VAR_6[VAR_5+1];

                        FUNC_3(VAR_6, VAR_2, VAR_5);
                        VAR_6[VAR_5] = 0;

                        VAR_4 = FUNC_2(VAR_6);
                        if (VAR_4 < 0)
                                return VAR_4;

                        VAR_3 = FUNC_0(VAR_3, VAR_4);
                }

                switch (*VAR_2) {

                case 143:
                case 142:
                        VAR_3 += 1;
                        break;

                case 139:
                case 132:
                        VAR_3 += 2;
                        break;

                case 138:
                case 131:
                case 129:
                        VAR_3 += 4;
                        break;

                case 137:
                case 130:
                case 140:
                        VAR_3 += 8;
                        break;

                case 133:
                case 141: {
                        if (VAR_5 == 2) {

                                VAR_4 = 1;
                        } else {
                                char VAR_7[VAR_5-1];

                                FUNC_3(VAR_7, VAR_2 + 1, VAR_5 - 2);
                                VAR_7[VAR_5 - 2] = 0;

                                VAR_4 = FUNC_5(VAR_7);
                                if (VAR_4 < 0)
                                        return VAR_4;
                        }

                        VAR_3 += VAR_4;
                        break;
                }

                case 134:
                case 136:
                case 135:
                case 144:
                case 128:
                        return -VAR_0;

                default:
                        FUNC_1("Unknown signature type");
                }

                VAR_2 += VAR_5;
        }

        VAR_4 = FUNC_2(VAR_1);
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_0(VAR_3, VAR_4);
}
