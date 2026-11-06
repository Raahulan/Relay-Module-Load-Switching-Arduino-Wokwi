# Wiring guide

The detailed pin table appears in [README.md](../README.md#pin-connections).

## Control side

- A green momentary button connects 5V to D2 when pushed.
- A **10 kΩ pull-down resistor** keeps D2 LOW when not pressed.
- Arduino D4 drives the relay IN input; relay VCC is 5V, GND is Arduino GND.
- The simulated Wokwi relay is set to **active HIGH** (`transistor: "pnp"`) to match the supplied source code.

## Simulated indicator load

The relay COM receives the simulated 5V supply, and its NO terminal passes power through a 220 Ω resistor and a red LED to GND when activated. The demonstration does not use mains electricity.

**Do not connect household mains or other hazardous/high-power loads based on this simulation.**
