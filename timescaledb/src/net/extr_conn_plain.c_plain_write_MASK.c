
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {size_t len; char* buf; } ;
typedef TYPE_1__ WSABUF ;
struct TYPE_6__ {int err; int sock; } ;
typedef int DWORD ;
typedef TYPE_2__ Connection ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int,int*,int ,int *,int *) ;
 int FUNC_2 (int ,char const*,size_t,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(Connection *VAR_0, const char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;
 VAR_3 = FUNC_2(VAR_0->sock, VAR_1, VAR_2, 0);

 if (VAR_3 < 0)
  VAR_0->err = VAR_3;


 return VAR_3;
}
