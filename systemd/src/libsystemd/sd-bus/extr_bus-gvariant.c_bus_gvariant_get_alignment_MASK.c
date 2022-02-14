
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*,size_t*) ;

int FUNC_4(const char *VAR_0) {
        size_t VAR_1 = 1;
        const char *VAR_2;
        int VAR_3;

        VAR_2 = VAR_0;
        while (*VAR_2 != 0 && VAR_1 < 8) {
                size_t VAR_4;
                int VAR_5;

                VAR_3 = FUNC_3(VAR_2, &VAR_4);
                if (VAR_3 < 0)
                        return VAR_3;

                switch (*VAR_2) {

                case 142:
                case 143:
                case 134:
                case 136:
                case 135:
                        VAR_5 = 1;
                        break;

                case 139:
                case 132:
                        VAR_5 = 2;
                        break;

                case 138:
                case 131:
                case 129:
                        VAR_5 = 4;
                        break;

                case 137:
                case 130:
                case 140:
                case 128:
                        VAR_5 = 8;
                        break;

                case 144: {
                        char VAR_6[VAR_4];

                        FUNC_2(VAR_6, VAR_2 + 1, VAR_4 - 1);
                        VAR_6[VAR_4 - 1] = 0;

                        VAR_5 = FUNC_4(VAR_6);
                        break;
                }

                case 133:
                case 141: {
                        char VAR_7[VAR_4-1];

                        FUNC_2(VAR_7, VAR_2 + 1, VAR_4 - 2);
                        VAR_7[VAR_4 - 2] = 0;

                        VAR_5 = FUNC_4(VAR_7);
                        break;
                }

                default:
                        FUNC_1("Unknown signature type");
                }

                if (VAR_5 < 0)
                        return VAR_5;

                FUNC_0(VAR_5 > 0 && VAR_5 <= 8);
                if ((size_t) VAR_5 > VAR_1)
                        VAR_1 = (size_t) VAR_5;

                VAR_2 += VAR_4;
        }

        return VAR_1;
}
