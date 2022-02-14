
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct instance {int log_level; int stats_interval; size_t mbuf_chunk_size; void* pid_filename; void* stats_addr; int stats_port; void* conf_filename; void* log_filename; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char**,int ,int ,int *) ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int) ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (void*) ;
 int VAR_13 ;

__attribute__((used)) static rstatus_t
FUNC_5(int VAR_14, char **VAR_15, struct instance *VAR_16)
{
    int VAR_17, VAR_18;

    VAR_8 = 0;

    for (;;) {
        VAR_17 = FUNC_0(VAR_14, VAR_15, VAR_10, VAR_6, ((void*)0));
        if (VAR_17 == -1) {

            break;
        }

        switch (VAR_17) {
        case 'h':
            VAR_12 = 1;
            VAR_11 = 1;
            break;

        case 'V':
            VAR_12 = 1;
            break;

        case 't':
            VAR_13 = 1;
            break;

        case 'd':
            VAR_4 = 1;
            break;

        case 'D':
            VAR_5 = 1;
            VAR_12 = 1;
            break;

        case 'v':
            VAR_18 = FUNC_2(VAR_7, FUNC_4(VAR_7));
            if (VAR_18 < 0) {
                FUNC_1("nutcracker: option -v requires a number");
                return VAR_0;
            }
            VAR_16->log_level = VAR_18;
            break;

        case 'o':
            VAR_16->log_filename = VAR_7;
            break;

        case 'c':
            VAR_16->conf_filename = VAR_7;
            break;

        case 's':
            VAR_18 = FUNC_2(VAR_7, FUNC_4(VAR_7));
            if (VAR_18 < 0) {
                FUNC_1("nutcracker: option -s requires a number");
                return VAR_0;
            }
            if (!FUNC_3(VAR_18)) {
                FUNC_1("nutcracker: option -s value %d is not a valid "
                           "port", VAR_18);
                return VAR_0;
            }

            VAR_16->stats_port = (uint16_t)VAR_18;
            break;

        case 'i':
            VAR_18 = FUNC_2(VAR_7, FUNC_4(VAR_7));
            if (VAR_18 < 0) {
                FUNC_1("nutcracker: option -i requires a number");
                return VAR_0;
            }

            VAR_16->stats_interval = VAR_18;
            break;

        case 'a':
            VAR_16->stats_addr = VAR_7;
            break;

        case 'p':
            VAR_16->pid_filename = VAR_7;
            break;

        case 'm':
            VAR_18 = FUNC_2(VAR_7, FUNC_4(VAR_7));
            if (VAR_18 <= 0) {
                FUNC_1("nutcracker: option -m requires a non-zero number");
                return VAR_0;
            }

            if (VAR_18 < VAR_2 || VAR_18 > VAR_1) {
                FUNC_1("nutcracker: mbuf chunk size must be between %zu and"
                           " %zu bytes", VAR_2, VAR_1);
                return VAR_0;
            }

            VAR_16->mbuf_chunk_size = (size_t)VAR_18;
            break;

        case '?':
            switch (VAR_9) {
            case 'o':
            case 'c':
            case 'p':
                FUNC_1("nutcracker: option -%c requires a file name",
                           VAR_9);
                break;

            case 'm':
            case 'v':
            case 's':
            case 'i':
                FUNC_1("nutcracker: option -%c requires a number", VAR_9);
                break;

            case 'a':
                FUNC_1("nutcracker: option -%c requires a string", VAR_9);
                break;

            default:
                FUNC_1("nutcracker: invalid option -- '%c'", VAR_9);
                break;
            }
            return VAR_0;

        default:
            FUNC_1("nutcracker: invalid option -- '%c'", VAR_9);
            return VAR_0;

        }
    }

    return VAR_3;
}
