# Test cases

1. **Idle after startup:** Leave green button unpressed. Expected: `Relay OFF`, D4 LOW, LED off.
2. **Hold button:** Press and hold. Expected: `Relay ON`, D4 HIGH, relay NO closes, red LED on.
3. **Release:** Release button. Expected: `Relay OFF`, LED off.
4. **Repeat:** Press/release several times. The LED follows the button (not a toggle).

Serial Monitor: **9600 baud**, updated approximately every 100 ms.

**Verification status:** The reconstructed Wokwi JSON has been checked for valid JSON syntax, but real Wokwi simulation execution has not been independently performed. Test after importing.
