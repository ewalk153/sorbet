# frozen_string_literal: true
# typed: true
# compiled: true

class MyArray < Array
end

xs = T.let(MyArray.new([2]), MyArray)

i = 0
while i < 10_000_000
  xs[0]
  i += 1
end

puts xs[0]
