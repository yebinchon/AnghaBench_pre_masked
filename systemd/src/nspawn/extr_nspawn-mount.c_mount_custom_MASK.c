
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_8__ {int in_userns; int type; } ;
typedef TYPE_1__ CustomMount ;







 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,TYPE_1__*) ;
 int FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (char const*,TYPE_1__*) ;
 int FUNC_5 (char const*,TYPE_1__*) ;
 int FUNC_6 (char const*,TYPE_1__*,int,int ,int ,char const*) ;

int FUNC_7(
                const char *VAR_0,
                CustomMount *VAR_1, size_t VAR_2,
                bool VAR_3, uid_t VAR_4, uid_t VAR_5,
                const char *VAR_6,
                bool VAR_7) {

        size_t VAR_8;
        int VAR_9;

        FUNC_0(VAR_0);

        for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
                CustomMount *VAR_10 = VAR_1 + VAR_8;

                if (VAR_10->in_userns != VAR_7)
                        continue;

                switch (VAR_10->type) {

                case 131:
                        VAR_9 = FUNC_3(VAR_0, VAR_10);
                        break;

                case 128:
                        VAR_9 = FUNC_6(VAR_0, VAR_10, VAR_3, VAR_4, VAR_5, VAR_6);
                        break;

                case 129:
                        VAR_9 = FUNC_5(VAR_0, VAR_10);
                        break;

                case 130:
                        VAR_9 = FUNC_4(VAR_0, VAR_10);
                        break;

                case 132:
                        VAR_9 = FUNC_2(VAR_0, VAR_10);
                        break;

                default:
                        FUNC_1("Unknown custom mount type");
                }

                if (VAR_9 < 0)
                        return VAR_9;
        }

        return 0;
}
