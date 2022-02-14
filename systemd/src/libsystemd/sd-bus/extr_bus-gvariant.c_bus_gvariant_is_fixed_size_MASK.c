
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*,size_t*) ;

int FUNC_4(const char *VAR_0) {
        const char *VAR_1;
        int VAR_2;

        FUNC_0(VAR_0);

        VAR_1 = VAR_0;
        while (*VAR_1 != 0) {
                size_t VAR_3;

                VAR_2 = FUNC_3(VAR_1, &VAR_3);
                if (VAR_2 < 0)
                        return VAR_2;

                switch (*VAR_1) {

                case 134:
                case 136:
                case 135:
                case 144:
                case 128:
                        return 0;

                case 142:
                case 143:
                case 139:
                case 132:
                case 138:
                case 131:
                case 129:
                case 137:
                case 130:
                case 140:
                        break;

                case 133:
                case 141: {
                        char VAR_4[VAR_3-1];

                        FUNC_2(VAR_4, VAR_1 + 1, VAR_3 - 2);
                        VAR_4[VAR_3 - 2] = 0;

                        VAR_2 = FUNC_4(VAR_4);
                        if (VAR_2 <= 0)
                                return VAR_2;
                        break;
                }

                default:
                        FUNC_1("Unknown signature type");
                }

                VAR_1 += VAR_3;
        }

        return 1;
}
