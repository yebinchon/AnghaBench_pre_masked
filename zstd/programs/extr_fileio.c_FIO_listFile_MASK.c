
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int info ;
typedef int fileInfo_t ;
typedef int InfoError ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (int *,char const*) ;





 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_7(fileInfo_t* VAR_0, const char* VAR_1, int VAR_2)
{
    fileInfo_t VAR_3;
    FUNC_6(&VAR_3, 0, sizeof(VAR_3));
    { InfoError const VAR_4 = FUNC_5(&VAR_3, VAR_1);
        switch (VAR_4) {
            case 131:

                FUNC_0(1, "Error while parsing \"%s\" \n", VAR_1);
                break;
            case 130:
                FUNC_1("File \"%s\" not compressed by zstd \n", VAR_1);
                if (VAR_2 > 2) FUNC_1("\n");
                return 1;
            case 132:

                if (VAR_2 > 2) FUNC_1("\n");
                return 1;
            case 128:
                FUNC_1("File \"%s\" is truncated \n", VAR_1);
                if (VAR_2 > 2) FUNC_1("\n");
                return 1;
            case 129:
            default:
                break;
        }

        FUNC_4(VAR_1, &VAR_3, VAR_2);
        *VAR_0 = FUNC_2(*VAR_0, VAR_3);
        FUNC_3(VAR_4 == 129 || VAR_4 == 131);
        return VAR_4;
    }
}
