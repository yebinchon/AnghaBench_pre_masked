
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int target_len; int target; int field_len; int field; } ;
typedef TYPE_1__ ParseFieldVec ;


 int FUNC_0 (void const*,size_t,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, size_t VAR_1, const ParseFieldVec *VAR_2, unsigned VAR_3) {
        unsigned VAR_4;

        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
                const ParseFieldVec *VAR_5 = &VAR_2[VAR_4];
                int VAR_6;

                VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5->field, VAR_5->field_len, VAR_5->target, VAR_5->target_len);
                if (VAR_6 < 0)
                        return VAR_6;
                else if (VAR_6 > 0)
                        break;
        }

        return 0;
}
