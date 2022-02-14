
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; size_t timestamp; size_t timespan; size_t size; size_t uint_val; size_t uint8; size_t uint16; size_t uint32; size_t uint64; int address; int ifindex; int percent; int int64; int int32; int int16; int int8; int int_val; int boolean; int string; } ;
typedef TYPE_1__ TableData ;
typedef int JsonVariant ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t VAR_3 ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int **,size_t) ;

__attribute__((used)) static int FUNC_7(TableData *VAR_4, JsonVariant **VAR_5) {

        switch (VAR_4->type) {

        case 149:
                return FUNC_4(VAR_5);

        case 138:
                return FUNC_5(VAR_5, VAR_4->string);

        case 151:
                return FUNC_2(VAR_5, VAR_4->boolean);

        case 135:
        case 133:
        case 134:
                if (VAR_4->timestamp == VAR_3)
                        return FUNC_4(VAR_5);

                return FUNC_6(VAR_5, VAR_4->timestamp);

        case 137:
        case 136:
                if (VAR_4->timespan == VAR_3)
                        return FUNC_4(VAR_5);

                return FUNC_6(VAR_5, VAR_4->timespan);

        case 139:
        case 150:
                if (VAR_4->size == (size_t) -1)
                        return FUNC_4(VAR_5);

                return FUNC_6(VAR_5, VAR_4->size);

        case 146:
                return FUNC_3(VAR_5, VAR_4->int_val);

        case 142:
                return FUNC_3(VAR_5, VAR_4->int8);

        case 145:
                return FUNC_3(VAR_5, VAR_4->int16);

        case 144:
                return FUNC_3(VAR_5, VAR_4->int32);

        case 143:
                return FUNC_3(VAR_5, VAR_4->int64);

        case 132:
                return FUNC_6(VAR_5, VAR_4->uint_val);

        case 128:
                return FUNC_6(VAR_5, VAR_4->uint8);

        case 131:
                return FUNC_6(VAR_5, VAR_4->uint16);

        case 130:
                return FUNC_6(VAR_5, VAR_4->uint32);

        case 129:
                return FUNC_6(VAR_5, VAR_4->uint64);

        case 140:
                return FUNC_3(VAR_5, VAR_4->percent);

        case 148:
                return FUNC_3(VAR_5, VAR_4->ifindex);

        case 141:
                return FUNC_1(VAR_5, &VAR_4->address, FUNC_0(VAR_0));

        case 147:
                return FUNC_1(VAR_5, &VAR_4->address, FUNC_0(VAR_1));

        default:
                return -VAR_2;
        }
}
