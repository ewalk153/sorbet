cd test/cli/package-layers-enabled-no-layers || exit 1

../../../main/sorbet --silence-dev-message --stripe-packages --stripe-packages-layers=good_layer_name,unused_layer_name --max-threads=0 . 2>&1
