#!/usr/bin/perl
use warnings;
use strict;
die "program x y empty obstacle fill density" unless (scalar(@ARGV) == 6);
my ($x, $y, $ec, $oc, $fc, $density) = @ARGV;
print "$y$ec$oc$fc\n";
for (my $i = 0; $i < $y; $i++) {
for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
print $oc;
}
else {
print $ec;
}
}
print "\n";
}