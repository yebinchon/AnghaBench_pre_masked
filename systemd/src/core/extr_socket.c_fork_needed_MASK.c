
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sa_family; } ;
struct TYPE_9__ {TYPE_1__ sa; } ;
struct TYPE_10__ {scalar_t__ network_namespace_path; scalar_t__ private_network; TYPE_2__ sockaddr; } ;
typedef TYPE_3__ SocketAddress ;
typedef TYPE_3__ ExecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(const SocketAddress *VAR_3, const ExecContext *VAR_4) {
        int VAR_5;

        FUNC_1(VAR_3);
        FUNC_1(VAR_4);



        if (FUNC_0(VAR_3->sockaddr.sa.sa_family, VAR_0, VAR_1)) {
                VAR_5 = FUNC_2();
                if (VAR_5 < 0)
                        return VAR_5;
                if (VAR_5 != VAR_2)
                        return 1;
        }

        return VAR_4->private_network || VAR_4->network_namespace_path;
}
