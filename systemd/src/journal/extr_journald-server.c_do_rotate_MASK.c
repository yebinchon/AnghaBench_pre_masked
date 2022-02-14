
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {char const* path; } ;
struct TYPE_9__ {int threshold_bytes; int enabled; } ;
struct TYPE_10__ {int deferred_closes; TYPE_1__ compress; } ;
typedef TYPE_2__ Server ;
typedef TYPE_3__ JournalFile ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__**,int ,int ,int,int ) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(
                Server *VAR_1,
                JournalFile **VAR_2,
                const char* VAR_3,
                bool VAR_4,
                uint32_t VAR_5) {

        int VAR_6;
        FUNC_0(VAR_1);

        if (!*VAR_2)
                return -VAR_0;

        VAR_6 = FUNC_1(VAR_2, VAR_1->compress.enabled, VAR_1->compress.threshold_bytes, VAR_4, VAR_1->deferred_closes);
        if (VAR_6 < 0) {
                if (*VAR_2)
                        return FUNC_2(VAR_6, "Failed to rotate %s: %m", (*VAR_2)->path);
                else
                        return FUNC_2(VAR_6, "Failed to create new %s journal: %m", VAR_3);
        }

        FUNC_3(*VAR_2, VAR_5);

        return VAR_6;
}
