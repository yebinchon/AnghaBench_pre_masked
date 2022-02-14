
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;



__attribute__((used)) static uintptr_t
FUNC_0(u_char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    ngx_uint_t VAR_3;

    if (VAR_0 == ((void*)0)) {

        VAR_3 = 0;
        while (VAR_2) {


            if ((*VAR_1 & 0x80) == 0) {
                switch (*VAR_1) {
                    case '\0':
                    case '\b':
                    case '\n':
                    case '\r':
                    case '\t':
                    case 26:
                    case '\\':
                    case '\'':
                    case '"':
                        VAR_3++;
                        break;
                    default:
                        break;
                }
            }
            VAR_1++;
            VAR_2--;
        }

        return (uintptr_t) VAR_3;
    }

    while (VAR_2) {
        if ((*VAR_1 & 0x80) == 0) {
            switch (*VAR_1) {
                case '\0':
                    *VAR_0++ = '\\';
                    *VAR_0++ = '0';
                    break;

                case '\b':
                    *VAR_0++ = '\\';
                    *VAR_0++ = 'b';
                    break;

                case '\n':
                    *VAR_0++ = '\\';
                    *VAR_0++ = 'n';
                    break;

                case '\r':
                    *VAR_0++ = '\\';
                    *VAR_0++ = 'r';
                    break;

                case '\t':
                    *VAR_0++ = '\\';
                    *VAR_0++ = 't';
                    break;

                case 26:
                    *VAR_0++ = '\\';
                    *VAR_0++ = 'Z';
                    break;

                case '\\':
                    *VAR_0++ = '\\';
                    *VAR_0++ = '\\';
                    break;

                case '\'':
                    *VAR_0++ = '\\';
                    *VAR_0++ = '\'';
                    break;

                case '"':
                    *VAR_0++ = '\\';
                    *VAR_0++ = '"';
                    break;

                default:
                    *VAR_0++ = *VAR_1;
                    break;
            }
        } else {
            *VAR_0++ = *VAR_1;
        }
        VAR_1++;
        VAR_2--;
    }

    return (uintptr_t) VAR_0;
}
