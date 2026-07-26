// dummy test 

fun double(x) => x * 2

test "double works" {
  assert(double(3) == 6)
  assert_eq(double(0), 0)
}