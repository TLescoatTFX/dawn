enable chromium_experimental_subgroup_matrix;

@group(0) @binding(0) var<storage, read_write> prevent_dce : array<i32, 1024>;

struct SB_RO {
  arg_0 : array<i32, 1024>,
}

@group(0) @binding(1) var<storage, read> sb_ro : SB_RO;

fn subgroupMatrixLoad_9bc799() -> subgroup_matrix_result<i8, 8, 8> {
  var res : subgroup_matrix_result<i8, 8, 8> = subgroupMatrixLoad<subgroup_matrix_result<i8, 8, 8>>(&(sb_ro.arg_0), 1u, true, 8u);
  return res;
}

@compute @workgroup_size(1)
fn compute_main() {
  subgroupMatrixStore(&(prevent_dce), 0, subgroupMatrixLoad_9bc799(), false, 64);
}
