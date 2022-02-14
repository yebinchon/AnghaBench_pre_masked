
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t written_uncompressed; int tar_fd; } ;
typedef TYPE_1__ TarImport ;


 int FUNC_0 (int ,void const*,size_t,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, size_t VAR_1, void *VAR_2) {
        TarImport *VAR_3 = VAR_2;
        int VAR_4;

        VAR_4 = FUNC_0(VAR_3->tar_fd, VAR_0, VAR_1, 0);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_3->written_uncompressed += VAR_1;

        return 0;
}
