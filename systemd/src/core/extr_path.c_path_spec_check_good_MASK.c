
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int previous_exists; int path; } ;
typedef TYPE_1__ PathSpec ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(PathSpec *VAR_2, bool VAR_3) {
        bool VAR_4 = 0;

        switch (VAR_2->type) {

        case 130:
                VAR_4 = FUNC_0(VAR_2->path, VAR_1) >= 0;
                break;

        case 129:
                VAR_4 = FUNC_2(VAR_2->path) > 0;
                break;

        case 131: {
                int VAR_5;

                VAR_5 = FUNC_1(VAR_2->path);
                VAR_4 = !(VAR_5 == -VAR_0 || VAR_5 > 0);
                break;
        }

        case 132:
        case 128: {
                bool VAR_6;

                VAR_6 = FUNC_0(VAR_2->path, VAR_1) >= 0;
                VAR_4 = !VAR_3 && VAR_6 != VAR_2->previous_exists;
                VAR_2->previous_exists = VAR_6;
                break;
        }

        default:
                ;
        }

        return VAR_4;
}
