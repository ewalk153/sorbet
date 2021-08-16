# frozen_string_literal: true
# typed: true
# compiled: true

mapped = [1, 2, 3].map do |x, y|
  puts "-- x: #{x}, y: #{y.inspect} --"
  [y, x]
end

p mapped

no_param = [1, 2, 3].map do
  puts "-- hello --"
end

p no_param
