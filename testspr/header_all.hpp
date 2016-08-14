/*=============================================================================
  Copyright (c) 2011-2016 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprout

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef TESTSPR_HEADER_ALL_HPP
#define TESTSPR_HEADER_ALL_HPP

#include <sprout/adapt/std/array.hpp>
#include <sprout/adapt/std/complex.hpp>
#include <sprout/adapt/std/utility.hpp>
#include <sprout/adl/not_found.hpp>
#include <sprout/algorithm.hpp>
#include <sprout/algorithm/searching.hpp>
#include <sprout/algorithm/string.hpp>
#include <sprout/array.hpp>
#include <sprout/assert.hpp>
#include <sprout/bit/operation.hpp>
#include <sprout/bitset.hpp>
#include <sprout/brainfuck.hpp>
#include <sprout/cctype.hpp>
#include <sprout/checksum.hpp>
#include <sprout/cinttypes.hpp>
#include <sprout/cmath.hpp>
#include <sprout/complex.hpp>
#include <sprout/compost.hpp>
#include <sprout/compressed_pair.hpp>
#include <sprout/config.hpp>
#include <sprout/container.hpp>
#include <sprout/cstddef.hpp>
#include <sprout/cstdint.hpp>
#include <sprout/cstdlib.hpp>
#include <sprout/cstring.hpp>
#include <sprout/ctime.hpp>
#include <sprout/ctype.hpp>
#include <sprout/current_function.hpp>
#include <sprout/cwchar.hpp>
#include <sprout/cwctype.hpp>
#include <sprout/darkroom.hpp>
#include <sprout/endian_traits.hpp>
#include <sprout/forward_clist.hpp>
#include <sprout/functional.hpp>
#include <sprout/generator.hpp>
#include <sprout/index_tuple.hpp>
#include <sprout/io.hpp>
#include <sprout/integer.hpp>
#include <sprout/iterator.hpp>
#include <sprout/limits.hpp>
#include <sprout/logic.hpp>
#include <sprout/math.hpp>
#include <sprout/math/curve.hpp>
#include <sprout/math/quaternion.hpp>
#include <sprout/memory.hpp>
#include <sprout/net.hpp>
#include <sprout/none.hpp>
#include <sprout/numeric.hpp>
#include <sprout/numeric/dft.hpp>
#include <sprout/numeric/fft.hpp>
#include <sprout/operation.hpp>
#include <sprout/optional.hpp>
#include <sprout/pit.hpp>
#include <sprout/predef.hpp>
#include <sprout/preprocessor.hpp>
#include <sprout/random.hpp>
#include <sprout/range.hpp>
#include <sprout/range/adaptor.hpp>
#include <sprout/range/algorithm.hpp>
#include <sprout/range/algorithm/string.hpp>
#include <sprout/range/numeric.hpp>
#include <sprout/range/numeric/dft.hpp>
#include <sprout/range/numeric/fft.hpp>
#include <sprout/rational.hpp>
#include <sprout/sized_pit.hpp>
#include <sprout/stateful.hpp>
#include <sprout/static_assert.hpp>
#include <sprout/static_warning.hpp>
#include <sprout/string.hpp>
#include <sprout/sub_array.hpp>
#include <sprout/tpp/algorithm.hpp>
#include <sprout/tuple.hpp>
#include <sprout/tuple/algorithm.hpp>
#include <sprout/tuple/operation.hpp>
#include <sprout/type.hpp>
#include <sprout/type_traits.hpp>
#include <sprout/utility.hpp>
#include <sprout/uuid.hpp>
#include <sprout/variant.hpp>
#include <sprout/weed.hpp>
#include <sprout/workaround.hpp>

//#include <sprout/algorithm/bogo_sort.hpp>
//#include <sprout/algorithm/bogo_sort_result.hpp>
//#include <sprout/algorithm/bozo_sort.hpp>
//#include <sprout/algorithm/bozo_sort_result.hpp>
//#include <sprout/algorithm/clamp_range.hpp>
//#include <sprout/algorithm/clamp_range_copy.hpp>
//#include <sprout/algorithm/copy.hpp>
//#include <sprout/algorithm/copy_backward.hpp>
//#include <sprout/algorithm/copy_if.hpp>
//#include <sprout/algorithm/copy_n.hpp>
//#include <sprout/algorithm/copy_until.hpp>
//#include <sprout/algorithm/copy_while.hpp>
//#include <sprout/algorithm/fill.hpp>
//#include <sprout/algorithm/fill_n.hpp>
//#include <sprout/algorithm/generate.hpp>
//#include <sprout/algorithm/generate_n.hpp>
//#include <sprout/algorithm/inplace_merge.hpp>
//#include <sprout/algorithm/iter_swap.hpp>
//#include <sprout/algorithm/make_heap.hpp>
//#include <sprout/algorithm/make_partial_heap.hpp>
//#include <sprout/algorithm/merge.hpp>
//#include <sprout/algorithm/move.hpp>
//#include <sprout/algorithm/move_backward.hpp>
//#include <sprout/algorithm/next_permutation.hpp>
//#include <sprout/algorithm/nth_element.hpp>
//#include <sprout/algorithm/partial_sort.hpp>
//#include <sprout/algorithm/partial_sort_copy.hpp>
//#include <sprout/algorithm/partition.hpp>
//#include <sprout/algorithm/partition_copy.hpp>
//#include <sprout/algorithm/pop_heap.hpp>
//#include <sprout/algorithm/prev_permutation.hpp>
//#include <sprout/algorithm/push_heap.hpp>
//#include <sprout/algorithm/random_shuffle.hpp>
//#include <sprout/algorithm/random_swap.hpp>
//#include <sprout/algorithm/random_swap_result.hpp>
//#include <sprout/algorithm/recurrence.hpp>
//#include <sprout/algorithm/recurrence_n.hpp>
//#include <sprout/algorithm/remove.hpp>
//#include <sprout/algorithm/remove_copy.hpp>
//#include <sprout/algorithm/remove_copy_if.hpp>
//#include <sprout/algorithm/remove_if.hpp>
//#include <sprout/algorithm/replace.hpp>
//#include <sprout/algorithm/replace_copy.hpp>
//#include <sprout/algorithm/replace_copy_if.hpp>
//#include <sprout/algorithm/replace_if.hpp>
//#include <sprout/algorithm/reverse.hpp>
//#include <sprout/algorithm/reverse_copy.hpp>
//#include <sprout/algorithm/rotate.hpp>
//#include <sprout/algorithm/rotate_copy.hpp>
//#include <sprout/algorithm/sample.hpp>
//#include <sprout/algorithm/set_difference.hpp>
//#include <sprout/algorithm/set_intersection.hpp>
//#include <sprout/algorithm/set_symmetric_difference.hpp>
//#include <sprout/algorithm/set_union.hpp>
//#include <sprout/algorithm/shuffle.hpp>
//#include <sprout/algorithm/shuffle_result.hpp>
//#include <sprout/algorithm/sort.hpp>
//#include <sprout/algorithm/sort_heap.hpp>
//#include <sprout/algorithm/stable_partition.hpp>
//#include <sprout/algorithm/stable_partition_copy.hpp>
//#include <sprout/algorithm/stable_sort.hpp>
//#include <sprout/algorithm/swap_element.hpp>
//#include <sprout/algorithm/swap_element_copy.hpp>
//#include <sprout/algorithm/swap_ranges.hpp>
//#include <sprout/algorithm/transform.hpp>
//#include <sprout/algorithm/unfold.hpp>
//#include <sprout/algorithm/unfold_n.hpp>
//#include <sprout/algorithm/unique.hpp>
//#include <sprout/algorithm/unique_copy.hpp>
//#include <sprout/algorithm/string/to_lower.hpp>
//#include <sprout/algorithm/string/to_lower_copy.hpp>
//#include <sprout/algorithm/string/to_upper.hpp>
//#include <sprout/algorithm/string/to_upper_copy.hpp>

//#include <sprout/numeric/adjacent_difference.hpp>
//#include <sprout/numeric/dft/amplitude_spectrum.hpp>
//#include <sprout/numeric/dft/dft.hpp>
//#include <sprout/numeric/dft/idft.hpp>
//#include <sprout/numeric/dft/phase_spectrum.hpp>
//#include <sprout/numeric/dft/sawtooth.hpp>
//#include <sprout/numeric/dft/sinusoid.hpp>
//#include <sprout/numeric/dft/spectrum.hpp>
//#include <sprout/numeric/dft/square.hpp>
//#include <sprout/numeric/dft/triangle.hpp>
//#include <sprout/numeric/dft/wave.hpp>
//#include <sprout/numeric/iota.hpp>
//#include <sprout/numeric/partial_sum.hpp>

//#include <sprout/operation/append.hpp>
//#include <sprout/operation/append_back.hpp>
//#include <sprout/operation/append_front.hpp>
//#include <sprout/operation/erase.hpp>
//#include <sprout/operation/erase_n.hpp>
//#include <sprout/operation/insert.hpp>
//#include <sprout/operation/insert_n.hpp>
//#include <sprout/operation/pop_back.hpp>
//#include <sprout/operation/pop_back_n.hpp>
//#include <sprout/operation/pop_front.hpp>
//#include <sprout/operation/pop_front_n.hpp>
//#include <sprout/operation/push_back.hpp>
//#include <sprout/operation/push_back_n.hpp>
//#include <sprout/operation/push_front.hpp>
//#include <sprout/operation/push_front_n.hpp>
//#include <sprout/operation/realign.hpp>
//#include <sprout/operation/realign_to.hpp>
//#include <sprout/operation/resize.hpp>
//#include <sprout/operation/resize_backward.hpp>
//#include <sprout/operation/set.hpp>

//#include <sprout/range/algorithm/bogo_sort.hpp>
//#include <sprout/range/algorithm/bozo_sort.hpp>
//#include <sprout/range/algorithm/clamp_range.hpp>
//#include <sprout/range/algorithm/clamp_range_copy.hpp>
//#include <sprout/range/algorithm/copy.hpp>
//#include <sprout/range/algorithm/copy_backward.hpp>
//#include <sprout/range/algorithm/copy_if.hpp>
//#include <sprout/range/algorithm/copy_until.hpp>
//#include <sprout/range/algorithm/copy_while.hpp>
//#include <sprout/range/algorithm/fill.hpp>
//#include <sprout/range/algorithm/generate.hpp>
//#include <sprout/range/algorithm/inplace_merge.hpp>
//#include <sprout/range/algorithm/make_heap.hpp>
//#include <sprout/range/algorithm/merge.hpp>
//#include <sprout/range/algorithm/move.hpp>
//#include <sprout/range/algorithm/move_backward.hpp>
//#include <sprout/range/algorithm/next_permutation.hpp>
//#include <sprout/range/algorithm/nth_element.hpp>
//#include <sprout/range/algorithm/partial_sort.hpp>
//#include <sprout/range/algorithm/partial_sort_copy.hpp>
//#include <sprout/range/algorithm/partition.hpp>
//#include <sprout/range/algorithm/partition_copy.hpp>
//#include <sprout/range/algorithm/pop_heap.hpp>
//#include <sprout/range/algorithm/prev_permutation.hpp>
//#include <sprout/range/algorithm/push_heap.hpp>
//#include <sprout/range/algorithm/random_shuffle.hpp>
//#include <sprout/range/algorithm/random_swap.hpp>
//#include <sprout/range/algorithm/remove.hpp>
//#include <sprout/range/algorithm/remove_copy.hpp>
//#include <sprout/range/algorithm/remove_copy_if.hpp>
//#include <sprout/range/algorithm/remove_if.hpp>
//#include <sprout/range/algorithm/replace.hpp>
//#include <sprout/range/algorithm/replace_copy.hpp>
//#include <sprout/range/algorithm/replace_copy_if.hpp>
//#include <sprout/range/algorithm/replace_if.hpp>
//#include <sprout/range/algorithm/reverse.hpp>
//#include <sprout/range/algorithm/reverse_copy.hpp>
//#include <sprout/range/algorithm/rotate.hpp>
//#include <sprout/range/algorithm/rotate_copy.hpp>
//#include <sprout/range/algorithm/sample.hpp>
//#include <sprout/range/algorithm/set_difference.hpp>
//#include <sprout/range/algorithm/set_intersection.hpp>
//#include <sprout/range/algorithm/set_symmetric_difference.hpp>
//#include <sprout/range/algorithm/set_union.hpp>
//#include <sprout/range/algorithm/shuffle.hpp>
//#include <sprout/range/algorithm/sort.hpp>
//#include <sprout/range/algorithm/sort_heap.hpp>
//#include <sprout/range/algorithm/stable_partition.hpp>
//#include <sprout/range/algorithm/stable_partition_copy.hpp>
//#include <sprout/range/algorithm/stable_sort.hpp>
//#include <sprout/range/algorithm/swap_element_copy.hpp>
//#include <sprout/range/algorithm/swap_ranges.hpp>
//#include <sprout/range/algorithm/transform.hpp>
//#include <sprout/range/algorithm/unique.hpp>
//#include <sprout/range/algorithm/unique_copy.hpp>
//#include <sprout/range/algorithm/string/to_lower_copy.hpp>
//#include <sprout/range/algorithm/string/to_upper_copy.hpp>

//#include <sprout/range/numeric/adjacent_difference.hpp>
//#include <sprout/range/numeric/dft/amplitude_spectrum.hpp>
//#include <sprout/range/numeric/dft/dft.hpp>
//#include <sprout/range/numeric/dft/idft.hpp>
//#include <sprout/range/numeric/dft/phase_spectrum.hpp>
//#include <sprout/range/numeric/dft/spectrum.hpp>
//#include <sprout/range/numeric/partial_sum.hpp>

#endif	// #ifndef TESTSPR_HEADER_ALL_HPP
