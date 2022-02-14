
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ n_bind_mounts; scalar_t__ n_temporary_filesystems; scalar_t__ protect_system; scalar_t__ protect_home; TYPE_1__* directories; scalar_t__ dynamic_user; int * prefix; scalar_t__ mount_apivfs; scalar_t__ root_directory; scalar_t__ protect_control_groups; scalar_t__ protect_kernel_logs; scalar_t__ protect_kernel_modules; scalar_t__ protect_kernel_tunables; scalar_t__ private_mounts; scalar_t__ private_devices; scalar_t__ private_tmp; int mount_flags; int inaccessible_paths; int read_only_paths; int read_write_paths; scalar_t__ root_image; } ;
struct TYPE_10__ {scalar_t__ var_tmp_dir; scalar_t__ tmp_dir; } ;
struct TYPE_9__ {int paths; } ;
typedef TYPE_2__ ExecRuntime ;
typedef TYPE_3__ ExecParameters ;
typedef size_t ExecDirectoryType ;
typedef TYPE_3__ ExecContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(
                const ExecContext *VAR_7,
                const ExecParameters *VAR_8,
                const ExecRuntime *VAR_9) {

        FUNC_1(VAR_7);
        FUNC_1(VAR_8);

        if (VAR_7->root_image)
                return 1;

        if (!FUNC_2(VAR_7->read_write_paths) ||
            !FUNC_2(VAR_7->read_only_paths) ||
            !FUNC_2(VAR_7->inaccessible_paths))
                return 1;

        if (VAR_7->n_bind_mounts > 0)
                return 1;

        if (VAR_7->n_temporary_filesystems > 0)
                return 1;

        if (!FUNC_0(VAR_7->mount_flags, 0, VAR_3))
                return 1;

        if (VAR_7->private_tmp && VAR_9 && (VAR_9->tmp_dir || VAR_9->var_tmp_dir))
                return 1;

        if (VAR_7->private_devices ||
            VAR_7->private_mounts ||
            VAR_7->protect_system != VAR_5 ||
            VAR_7->protect_home != VAR_4 ||
            VAR_7->protect_kernel_tunables ||
            VAR_7->protect_kernel_modules ||
            VAR_7->protect_kernel_logs ||
            VAR_7->protect_control_groups)
                return 1;

        if (VAR_7->root_directory) {
                ExecDirectoryType VAR_10;

                if (VAR_7->mount_apivfs)
                        return 1;

                for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
                        if (!VAR_8->prefix[VAR_10])
                                continue;

                        if (!FUNC_2(VAR_7->directories[VAR_10].paths))
                                return 1;
                }
        }

        if (VAR_7->dynamic_user &&
            (!FUNC_2(VAR_7->directories[VAR_2].paths) ||
             !FUNC_2(VAR_7->directories[VAR_0].paths) ||
             !FUNC_2(VAR_7->directories[VAR_1].paths)))
                return 1;

        return 0;
}
